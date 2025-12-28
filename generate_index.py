#!/usr/bin/env python3
"""
generate_index.py

Script per generare automaticamente il README.md alla radice del repository,
contenente l'indice delle lezioni Raylib.

Ogni lezione deve:
- trovarsi nella cartella 'projects/'
- essere una cartella
- contenere un file 'description.txt' con una descrizione su una sola riga
"""

from pathlib import Path

PROJECTS_DIR = Path("projects")
OUTPUT_README = Path("README.md")

HEADER = """# Raylib – Lezioni di grafica

Questa repository contiene una serie di lezioni progressive
per imparare la grafica 2D utilizzando la libreria Raylib.

## Indice delle lezioni

"""


def main():
    if not PROJECTS_DIR.exists():
        print("Errore: cartella 'projects/' non trovata")
        return

    lessons = sorted([
        p for p in PROJECTS_DIR.iterdir()
        if p.is_dir()
    ])

    lines = [HEADER]

    for lesson in lessons:
        description_file = lesson / "description.txt"

        if description_file.exists():
            description = description_file.read_text(encoding="utf-8").strip()
        else:
            description = "(descrizione mancante)"

        lines.append(f"- **{lesson.name}**:  ")
        lines.append(f"  {description}\n")

    OUTPUT_README.write_text("".join(lines), encoding="utf-8")
    print(f"README.md generato con {len(lessons)} lezioni")


if __name__ == "__main__":
    main()
