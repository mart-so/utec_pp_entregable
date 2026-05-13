# utec_pp_entregable

## Captura del entorno ##

martinsouza@MacBook-Air-de-Martin utec_pp_entregable %      code --version
zsh: command not found: code

Muestra el error command not found, 

El problema es que aunque tenga instalado Visual Studio Code, el comando code no está agregado al PATH de tu terminal.

En Mac (mi caso) se arregla así:
    1) Abrí Visual Studio Code.
    2) Presionando Cmd + Shift + P.
    3) Escribí: Shell Command: Install 'code' command in PATH
    4) Seleccione esa opción.

## Razonamiento ##

### Decodificar bytes a mano ###

01001000 =0×128+1×64+0×32+0×16+1×8+0×4+0×2+0×1 = 72 'H'
01101001 = 0×128+1×64+1×32+0×16+1×8+0×4+0×2+1×1 = 105 'i'
00100001 = 0×128+0×64+1×32+0×16+0×8+0×4+0×2+1×1 = 33 '!'
01000010= 0×128+1×64+0×32+0×16+0×8+0×4+1×2+0×1 = 66 'B'