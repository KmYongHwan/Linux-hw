#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x5c8ad287, "idma32_dma_probe" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x6ebaa08a, "dw_dma_probe" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x124ff31e, "dw_dma_remove" },
	{ 0x176ac7d3, "do_dw_dma_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9fb60dae, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6cccbfd1, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDE5CB08D4141DAE60D1364");
