cmd_drivers/gpu/drm/gma500/gma500_gfx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpu/drm/gma500/gma500_gfx.ko drivers/gpu/drm/gma500/gma500_gfx.o drivers/gpu/drm/gma500/gma500_gfx.mod.o;  true
