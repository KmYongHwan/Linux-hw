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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa108af74, "dfl_fpga_feature_devs_enumerate" },
	{ 0xd997bcb2, "dfl_fpga_enum_info_add_dfl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7d004d41, "dfl_fpga_enum_info_free" },
	{ 0x6f17cd99, "dfl_fpga_enum_info_alloc" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0xdab1180, "dfl_fpga_feature_devs_remove" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0xf20102e, "dfl_fpga_cdev_config_ports_vf" },
	{ 0x1bcff4ff, "dfl_fpga_cdev_config_ports_pf" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl");

MODULE_ALIAS("pci:v00008086d0000BCBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCFDF8470A11AA9F45083C0");
