cmd_drivers/media/dvb-frontends/stv090x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/dvb-frontends/stv090x.ko drivers/media/dvb-frontends/stv090x.o drivers/media/dvb-frontends/stv090x.mod.o;  true
