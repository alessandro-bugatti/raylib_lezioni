function(add_raylib_app APP_NAME)
    add_executable(${APP_NAME} ${ARGN})

    target_link_libraries(${APP_NAME} PRIVATE raylib)

    target_compile_features(${APP_NAME} PRIVATE cxx_std_20)

    # Copia automatica degli assets accanto all'eseguibile
    add_custom_command(
            TARGET ${APP_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_CURRENT_SOURCE_DIR}/assets
            $<TARGET_FILE_DIR:${APP_NAME}>/assets
    )

    # Warning ragionevoli (opzionale)
    if (MSVC)
        target_compile_options(${APP_NAME} PRIVATE /W4)
    else()
        target_compile_options(${APP_NAME} PRIVATE -Wall -Wextra)
    endif()
endfunction()

