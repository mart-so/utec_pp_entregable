# utec_pp_entregable

Captura del entorno:

martinsouza@MacBook-Air-de-Martin utec_pp_entregable %      code --version
zsh: command not found: code

Muestra el error command not found, 

El problema es que aunque tenga instalado Visual Studio Code, el comando code no está agregado al PATH de tu terminal.

En Mac (mi caso) se arregla así:
    1) Abrí Visual Studio Code.
    2) Presionando Cmd + Shift + P.
    3) Escribí: Shell Command: Install 'code' command in PATH
    4) Seleccione esa opción.