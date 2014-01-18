This program gets rid of this FireFox dialog:

.-----------------------------------------------------------------------------.
|Firefox Update                                                            [x]|
`-----------------------------------------------------------------------------'
|Incompatibe Add-ons                                                          |
|                                                                             |
|-----------------------------------------------------------------------------|
|                                                                             |
|   The following add-ons are not compatible with this version of Firefox     |
|   and have been disabled:                                                   |
|                                                                             |
|   .---------------------------------------------------------------------.   |
|   |Microsoft .NET Framework Assistant 1.2.1                             |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   |                                                                     |   |
|   `---------------------------------------------------------------------'   |
|                                                                             |
|   Firefox can check if there are compatible versions of these add-ons       |
|   available.                                                                |
|                                                                             |
|-----------------------------------------------------------------------------|
|                                                                             |
|                                    .---------.-----------.  .-------------. |
|                                    |  < Back | Check Now |  | Don't Check | |
|                                    `----=----'-=---------'  `-=-----------' |
|                                                                             |
`-----------------------------------------------------------------------------'

The program simply simulates clicking [x] by sending WM_CLOSE message to the
window.

