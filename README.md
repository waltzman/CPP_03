# CPP_03


To display every color escape codes type this commnad:

```bash
for COLOR in {1..255}; do echo -en "\e[38;5;${COLOR}m${COLOR} "; done; echo;
```