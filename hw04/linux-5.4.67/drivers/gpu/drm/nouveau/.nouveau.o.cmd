cmd_drivers/gpu/drm/nouveau/nouveau.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/gpu/drm/nouveau/nouveau.o drivers/gpu/drm/nouveau/nvif/object.o drivers/gpu/drm/nouveau/nvif/client.o drivers/gpu/drm/nouveau/nvif/device.o drivers/gpu/drm/nouveau/nvif/disp.o drivers/gpu/drm/nouveau/nvif/driver.o drivers/gpu/drm/nouveau/nvif/fifo.o drivers/gpu/drm/nouveau/nvif/mem.o drivers/gpu/drm/nouveau/nvif/mmu.o drivers/gpu/drm/nouveau/nvif/notify.o drivers/gpu/drm/nouveau/nvif/vmm.o drivers/gpu/drm/nouveau/nvif/user.o drivers/gpu/drm/nouveau/nvif/userc361.o drivers/gpu/drm/nouveau/nvkm/core/client.o drivers/gpu/drm/nouveau/nvkm/core/engine.o drivers/gpu/drm/nouveau/nvkm/core/enum.o drivers/gpu/drm/nouveau/nvkm/core/event.o drivers/gpu/drm/nouveau/nvkm/core/firmware.o drivers/gpu/drm/nouveau/nvkm/core/gpuobj.o drivers/gpu/drm/nouveau/nvkm/core/ioctl.o drivers/gpu/drm/nouveau/nvkm/core/memory.o drivers/gpu/drm/nouveau/nvkm/core/mm.o drivers/gpu/drm/nouveau/nvkm/core/notify.o drivers/gpu/drm/nouveau/nvkm/core/object.o drivers/gpu/drm/nouveau/nvkm/core/oproxy.o drivers/gpu/drm/nouveau/nvkm/core/option.o drivers/gpu/drm/nouveau/nvkm/core/ramht.o drivers/gpu/drm/nouveau/nvkm/core/subdev.o drivers/gpu/drm/nouveau/nvkm/falcon/base.o drivers/gpu/drm/nouveau/nvkm/falcon/v1.o drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue.o drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0137c63d.o drivers/gpu/drm/nouveau/nvkm/falcon/msgqueue_0148cdec.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/base.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/gm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/bar/tu102.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/base.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/bit.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/boost.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/conn.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/cstep.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/dcb.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/disp.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/dp.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/extdev.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/fan.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/gpio.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/i2c.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/iccsense.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/image.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/init.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/mxm.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/npde.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/pcir.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/perf.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/pll.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/pmu.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/power_budget.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/ramcfg.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/rammap.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/shadow.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/shadowacpi.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/shadowof.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/shadowpci.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/shadowramin.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/shadowrom.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/timing.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/therm.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/vmap.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/volt.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/vpstate.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/xpio.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/M0203.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/M0205.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/M0209.o drivers/gpu/drm/nouveau/nvkm/subdev/bios/P0260.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/base.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/hwsq.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/nv31.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/g94.o drivers/gpu/drm/nouveau/nvkm/subdev/bus/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/base.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/gt215.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/mcp77.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/pllnv04.o drivers/gpu/drm/nouveau/nvkm/subdev/clk/pllgt215.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/base.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/nv05.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/nv10.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/nv1a.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/nv20.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/g98.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/gt215.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/mcp89.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/gv100.o drivers/gpu/drm/nouveau/nvkm/subdev/devinit/tu102.o drivers/gpu/drm/nouveau/nvkm/subdev/fault/base.o drivers/gpu/drm/nouveau/nvkm/subdev/fault/user.o drivers/gpu/drm/nouveau/nvkm/subdev/fault/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/fault/gv100.o drivers/gpu/drm/nouveau/nvkm/subdev/fault/tu102.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/base.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv10.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv1a.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv20.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv25.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv30.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv35.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv36.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv41.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv44.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv46.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv47.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv49.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv4e.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gt215.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/mcp77.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/mcp89.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gf108.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gk110.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gp102.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gp10b.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gv100.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ram.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv04.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv10.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv1a.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv20.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv40.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv41.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv44.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv49.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv4e.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramnv50.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/rammcp77.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgf100.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgf108.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgk104.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgm107.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgm200.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgp100.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/sddr2.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/sddr3.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gddr3.o drivers/gpu/drm/nouveau/nvkm/subdev/fb/gddr5.o drivers/gpu/drm/nouveau/nvkm/subdev/fuse/base.o drivers/gpu/drm/nouveau/nvkm/subdev/fuse/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/fuse/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/fuse/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/gpio/base.o drivers/gpu/drm/nouveau/nvkm/subdev/gpio/nv10.o drivers/gpu/drm/nouveau/nvkm/subdev/gpio/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/gpio/g94.o drivers/gpu/drm/nouveau/nvkm/subdev/gpio/gf119.o drivers/gpu/drm/nouveau/nvkm/subdev/gpio/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/gsp/gv100.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/base.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/nv4e.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/g94.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/gf117.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/gf119.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/pad.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/padnv04.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/padnv4e.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/padnv50.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/padg94.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/padgf119.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/padgm200.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/bus.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/busnv04.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/busnv4e.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/busnv50.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/busgf119.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/bit.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/aux.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/auxg94.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/auxgf119.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/auxgm200.o drivers/gpu/drm/nouveau/nvkm/subdev/i2c/anx9805.o drivers/gpu/drm/nouveau/nvkm/subdev/ibus/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/ibus/gf117.o drivers/gpu/drm/nouveau/nvkm/subdev/ibus/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/ibus/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/ibus/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/ibus/gp10b.o drivers/gpu/drm/nouveau/nvkm/subdev/iccsense/base.o drivers/gpu/drm/nouveau/nvkm/subdev/iccsense/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/instmem/base.o drivers/gpu/drm/nouveau/nvkm/subdev/instmem/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/instmem/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/instmem/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/instmem/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/base.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/ltc/gp102.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/base.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/nv11.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/nv17.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/nv44.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/g98.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/gt215.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/gp10b.o drivers/gpu/drm/nouveau/nvkm/subdev/mc/tu102.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/base.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/nv41.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/nv44.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mcp77.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gp10b.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/gv100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/tu102.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/memnv04.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/memnv50.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/memgf100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmm.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmnv04.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmnv41.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmnv44.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmnv50.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmmcp77.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgf100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgk104.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgm200.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgp100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgp10b.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmgv100.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/vmmtu102.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/umem.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/ummu.o drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.o drivers/gpu/drm/nouveau/nvkm/subdev/mxm/base.o drivers/gpu/drm/nouveau/nvkm/subdev/mxm/mxms.o drivers/gpu/drm/nouveau/nvkm/subdev/mxm/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/agp.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/base.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/pcie.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/nv46.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/nv4c.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/g92.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/g94.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/gf106.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/pci/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/base.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/memx.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gt215.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gf119.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk110.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk208.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gp102.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/base.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/hs_ucode.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/ls_ucode_gr.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/ls_ucode_msgqueue.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r370.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r375.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/gm20b.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/gp102.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/gp108.o drivers/gpu/drm/nouveau/nvkm/subdev/secboot/gp10b.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/base.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/fan.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/fannil.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/fanpwm.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/ic.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/temp.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/nv50.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/g84.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gt215.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gf119.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gm107.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gm200.o drivers/gpu/drm/nouveau/nvkm/subdev/therm/gp100.o drivers/gpu/drm/nouveau/nvkm/subdev/timer/base.o drivers/gpu/drm/nouveau/nvkm/subdev/timer/nv04.o drivers/gpu/drm/nouveau/nvkm/subdev/timer/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/timer/nv41.o drivers/gpu/drm/nouveau/nvkm/subdev/timer/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/top/base.o drivers/gpu/drm/nouveau/nvkm/subdev/top/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/base.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/gpio.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/nv40.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/gf100.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/gf117.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/gk104.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/gk20a.o drivers/gpu/drm/nouveau/nvkm/subdev/volt/gm20b.o drivers/gpu/drm/nouveau/nvkm/engine/falcon.o drivers/gpu/drm/nouveau/nvkm/engine/xtensa.o drivers/gpu/drm/nouveau/nvkm/engine/bsp/g84.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gm107.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gm200.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gp100.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gp102.o drivers/gpu/drm/nouveau/nvkm/engine/ce/gv100.o drivers/gpu/drm/nouveau/nvkm/engine/ce/tu102.o drivers/gpu/drm/nouveau/nvkm/engine/cipher/g84.o drivers/gpu/drm/nouveau/nvkm/engine/device/acpi.o drivers/gpu/drm/nouveau/nvkm/engine/device/base.o drivers/gpu/drm/nouveau/nvkm/engine/device/ctrl.o drivers/gpu/drm/nouveau/nvkm/engine/device/pci.o drivers/gpu/drm/nouveau/nvkm/engine/device/tegra.o drivers/gpu/drm/nouveau/nvkm/engine/device/user.o drivers/gpu/drm/nouveau/nvkm/engine/disp/base.o drivers/gpu/drm/nouveau/nvkm/engine/disp/nv04.o drivers/gpu/drm/nouveau/nvkm/engine/disp/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/g84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/g94.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gt200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/mcp77.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/disp/mcp89.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gk110.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gm107.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gm200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gp100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/gv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/tu102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/vga.o drivers/gpu/drm/nouveau/nvkm/engine/disp/head.o drivers/gpu/drm/nouveau/nvkm/engine/disp/headnv04.o drivers/gpu/drm/nouveau/nvkm/engine/disp/headnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/headgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/headgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ior.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dacnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dacgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/piornv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sornv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorg84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorg94.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sormcp77.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorgt215.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sormcp89.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorgk104.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorgm107.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorgm200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sorgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/sortu102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/outp.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dp.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdagt215.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdagf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmi.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmig84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmigt215.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmigf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmigk104.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmigm200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/hdmigv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/conn.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootnv04.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootg84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootg94.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgt200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgt215.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgk104.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgk110.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgm107.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgm200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgp100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/rootgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/roottu102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/channv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/changf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/changv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dmacnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dmacgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dmacgp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/dmacgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/basenv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/baseg84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/basegf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/basegp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/corenv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/coreg84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/coreg94.o drivers/gpu/drm/nouveau/nvkm/engine/disp/coregf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/coregk104.o drivers/gpu/drm/nouveau/nvkm/engine/disp/coregp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/coregv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ovlynv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ovlyg84.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ovlygt200.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ovlygf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ovlygk104.o drivers/gpu/drm/nouveau/nvkm/engine/disp/ovlygp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/wimmgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/wndwgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/piocnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/piocgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/cursnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/cursgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/cursgp102.o drivers/gpu/drm/nouveau/nvkm/engine/disp/cursgv100.o drivers/gpu/drm/nouveau/nvkm/engine/disp/oimmnv50.o drivers/gpu/drm/nouveau/nvkm/engine/disp/oimmgf119.o drivers/gpu/drm/nouveau/nvkm/engine/disp/oimmgp102.o drivers/gpu/drm/nouveau/nvkm/engine/dma/base.o drivers/gpu/drm/nouveau/nvkm/engine/dma/nv04.o drivers/gpu/drm/nouveau/nvkm/engine/dma/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/dma/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/dma/gf119.o drivers/gpu/drm/nouveau/nvkm/engine/dma/gv100.o drivers/gpu/drm/nouveau/nvkm/engine/dma/user.o drivers/gpu/drm/nouveau/nvkm/engine/dma/usernv04.o drivers/gpu/drm/nouveau/nvkm/engine/dma/usernv50.o drivers/gpu/drm/nouveau/nvkm/engine/dma/usergf100.o drivers/gpu/drm/nouveau/nvkm/engine/dma/usergf119.o drivers/gpu/drm/nouveau/nvkm/engine/dma/usergv100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/base.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/nv04.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/nv10.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/nv17.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/nv40.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/g84.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gk110.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gk208.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gk20a.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gm107.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gm200.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gm20b.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gp100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gp10b.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gv100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/tu102.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/chan.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/channv50.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/chang84.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/dmanv04.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/dmanv10.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/dmanv17.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/dmanv40.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/dmanv50.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/dmag84.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gpfifonv50.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gpfifog84.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gpfifogf100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gpfifogk104.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gpfifogv100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/gpfifotu102.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/usergv100.o drivers/gpu/drm/nouveau/nvkm/engine/fifo/usertu102.o drivers/gpu/drm/nouveau/nvkm/engine/gr/base.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv15.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv17.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv20.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv25.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv2a.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv30.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv34.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv35.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv40.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv44.o drivers/gpu/drm/nouveau/nvkm/engine/gr/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/gr/g84.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gt200.o drivers/gpu/drm/nouveau/nvkm/engine/gr/mcp79.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/gr/mcp89.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gf104.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gf108.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gf110.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gf117.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gf119.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gk110.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gk110b.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gk208.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gk20a.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gm107.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gm200.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gm20b.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gp100.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gp102.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gp104.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gp107.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gp10b.o drivers/gpu/drm/nouveau/nvkm/engine/gr/gv100.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxnv40.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxnv50.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgf100.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgf104.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgf108.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgf110.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgf117.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgf119.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgk104.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgk110.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgk110b.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgk208.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgk20a.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgm107.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgm200.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgm20b.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgp100.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgp102.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgp104.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgp107.o drivers/gpu/drm/nouveau/nvkm/engine/gr/ctxgv100.o drivers/gpu/drm/nouveau/nvkm/engine/mpeg/nv31.o drivers/gpu/drm/nouveau/nvkm/engine/mpeg/nv40.o drivers/gpu/drm/nouveau/nvkm/engine/mpeg/nv44.o drivers/gpu/drm/nouveau/nvkm/engine/mpeg/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/mpeg/g84.o drivers/gpu/drm/nouveau/nvkm/engine/mspdec/base.o drivers/gpu/drm/nouveau/nvkm/engine/mspdec/g98.o drivers/gpu/drm/nouveau/nvkm/engine/mspdec/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/mspdec/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/mspdec/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/msppp/base.o drivers/gpu/drm/nouveau/nvkm/engine/msppp/g98.o drivers/gpu/drm/nouveau/nvkm/engine/msppp/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/msppp/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/msvld/base.o drivers/gpu/drm/nouveau/nvkm/engine/msvld/g98.o drivers/gpu/drm/nouveau/nvkm/engine/msvld/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/msvld/mcp89.o drivers/gpu/drm/nouveau/nvkm/engine/msvld/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/msvld/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/nvdec/base.o drivers/gpu/drm/nouveau/nvkm/engine/nvdec/gp102.o drivers/gpu/drm/nouveau/nvkm/engine/pm/base.o drivers/gpu/drm/nouveau/nvkm/engine/pm/nv40.o drivers/gpu/drm/nouveau/nvkm/engine/pm/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/pm/g84.o drivers/gpu/drm/nouveau/nvkm/engine/pm/gt200.o drivers/gpu/drm/nouveau/nvkm/engine/pm/gt215.o drivers/gpu/drm/nouveau/nvkm/engine/pm/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/pm/gf108.o drivers/gpu/drm/nouveau/nvkm/engine/pm/gf117.o drivers/gpu/drm/nouveau/nvkm/engine/pm/gk104.o drivers/gpu/drm/nouveau/nvkm/engine/sec/g98.o drivers/gpu/drm/nouveau/nvkm/engine/sec2/base.o drivers/gpu/drm/nouveau/nvkm/engine/sec2/gp102.o drivers/gpu/drm/nouveau/nvkm/engine/sec2/tu102.o drivers/gpu/drm/nouveau/nvkm/engine/sw/base.o drivers/gpu/drm/nouveau/nvkm/engine/sw/nv04.o drivers/gpu/drm/nouveau/nvkm/engine/sw/nv10.o drivers/gpu/drm/nouveau/nvkm/engine/sw/nv50.o drivers/gpu/drm/nouveau/nvkm/engine/sw/gf100.o drivers/gpu/drm/nouveau/nvkm/engine/sw/chan.o drivers/gpu/drm/nouveau/nvkm/engine/sw/nvsw.o drivers/gpu/drm/nouveau/nvkm/engine/vp/g84.o drivers/gpu/drm/nouveau/nouveau_acpi.o drivers/gpu/drm/nouveau/nouveau_debugfs.o drivers/gpu/drm/nouveau/nouveau_drm.o drivers/gpu/drm/nouveau/nouveau_hwmon.o drivers/gpu/drm/nouveau/nouveau_ioc32.o drivers/gpu/drm/nouveau/nouveau_led.o drivers/gpu/drm/nouveau/nouveau_nvif.o drivers/gpu/drm/nouveau/nouveau_usif.o drivers/gpu/drm/nouveau/nouveau_vga.o drivers/gpu/drm/nouveau/nouveau_bo.o drivers/gpu/drm/nouveau/nouveau_gem.o drivers/gpu/drm/nouveau/nouveau_mem.o drivers/gpu/drm/nouveau/nouveau_prime.o drivers/gpu/drm/nouveau/nouveau_sgdma.o drivers/gpu/drm/nouveau/nouveau_ttm.o drivers/gpu/drm/nouveau/nouveau_vmm.o drivers/gpu/drm/nouveau/nouveau_backlight.o drivers/gpu/drm/nouveau/nouveau_bios.o drivers/gpu/drm/nouveau/nouveau_connector.o drivers/gpu/drm/nouveau/nouveau_display.o drivers/gpu/drm/nouveau/nouveau_dp.o drivers/gpu/drm/nouveau/nouveau_fbcon.o drivers/gpu/drm/nouveau/nv04_fbcon.o drivers/gpu/drm/nouveau/nv50_fbcon.o drivers/gpu/drm/nouveau/nvc0_fbcon.o drivers/gpu/drm/nouveau/dispnv04/arb.o drivers/gpu/drm/nouveau/dispnv04/crtc.o drivers/gpu/drm/nouveau/dispnv04/cursor.o drivers/gpu/drm/nouveau/dispnv04/dac.o drivers/gpu/drm/nouveau/dispnv04/dfp.o drivers/gpu/drm/nouveau/dispnv04/disp.o drivers/gpu/drm/nouveau/dispnv04/hw.o drivers/gpu/drm/nouveau/dispnv04/overlay.o drivers/gpu/drm/nouveau/dispnv04/tvmodesnv17.o drivers/gpu/drm/nouveau/dispnv04/tvnv04.o drivers/gpu/drm/nouveau/dispnv04/tvnv17.o drivers/gpu/drm/nouveau/dispnv50/disp.o drivers/gpu/drm/nouveau/dispnv50/lut.o drivers/gpu/drm/nouveau/dispnv50/core.o drivers/gpu/drm/nouveau/dispnv50/core507d.o drivers/gpu/drm/nouveau/dispnv50/core827d.o drivers/gpu/drm/nouveau/dispnv50/core907d.o drivers/gpu/drm/nouveau/dispnv50/core917d.o drivers/gpu/drm/nouveau/dispnv50/corec37d.o drivers/gpu/drm/nouveau/dispnv50/corec57d.o drivers/gpu/drm/nouveau/dispnv50/dac507d.o drivers/gpu/drm/nouveau/dispnv50/dac907d.o drivers/gpu/drm/nouveau/dispnv50/pior507d.o drivers/gpu/drm/nouveau/dispnv50/sor507d.o drivers/gpu/drm/nouveau/dispnv50/sor907d.o drivers/gpu/drm/nouveau/dispnv50/sorc37d.o drivers/gpu/drm/nouveau/dispnv50/head.o drivers/gpu/drm/nouveau/dispnv50/head507d.o drivers/gpu/drm/nouveau/dispnv50/head827d.o drivers/gpu/drm/nouveau/dispnv50/head907d.o drivers/gpu/drm/nouveau/dispnv50/head917d.o drivers/gpu/drm/nouveau/dispnv50/headc37d.o drivers/gpu/drm/nouveau/dispnv50/headc57d.o drivers/gpu/drm/nouveau/dispnv50/wimm.o drivers/gpu/drm/nouveau/dispnv50/wimmc37b.o drivers/gpu/drm/nouveau/dispnv50/wndw.o drivers/gpu/drm/nouveau/dispnv50/wndwc37e.o drivers/gpu/drm/nouveau/dispnv50/wndwc57e.o drivers/gpu/drm/nouveau/dispnv50/base.o drivers/gpu/drm/nouveau/dispnv50/base507c.o drivers/gpu/drm/nouveau/dispnv50/base827c.o drivers/gpu/drm/nouveau/dispnv50/base907c.o drivers/gpu/drm/nouveau/dispnv50/base917c.o drivers/gpu/drm/nouveau/dispnv50/curs.o drivers/gpu/drm/nouveau/dispnv50/curs507a.o drivers/gpu/drm/nouveau/dispnv50/curs907a.o drivers/gpu/drm/nouveau/dispnv50/cursc37a.o drivers/gpu/drm/nouveau/dispnv50/oimm.o drivers/gpu/drm/nouveau/dispnv50/oimm507b.o drivers/gpu/drm/nouveau/dispnv50/ovly.o drivers/gpu/drm/nouveau/dispnv50/ovly507e.o drivers/gpu/drm/nouveau/dispnv50/ovly827e.o drivers/gpu/drm/nouveau/dispnv50/ovly907e.o drivers/gpu/drm/nouveau/dispnv50/ovly917e.o drivers/gpu/drm/nouveau/nouveau_abi16.o drivers/gpu/drm/nouveau/nouveau_chan.o drivers/gpu/drm/nouveau/nouveau_dma.o drivers/gpu/drm/nouveau/nouveau_fence.o drivers/gpu/drm/nouveau/nv04_fence.o drivers/gpu/drm/nouveau/nv10_fence.o drivers/gpu/drm/nouveau/nv17_fence.o drivers/gpu/drm/nouveau/nv50_fence.o drivers/gpu/drm/nouveau/nv84_fence.o drivers/gpu/drm/nouveau/nvc0_fence.o
