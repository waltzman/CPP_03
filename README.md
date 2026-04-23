# CPP_03


To display escape codes of every color, type this command:

```bash
for COLOR in {1..255}; do echo -en "\e[38;5;${COLOR}m${COLOR} "; done; echo;
```
