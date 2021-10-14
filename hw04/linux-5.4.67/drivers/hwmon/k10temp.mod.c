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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbf51fdd3, "pci_bus_read_config_dword" },
	{ 0xb06b3dae, "pci_bus_write_config_dword" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0x649aec51, "node_to_amd_nb" },
	{ 0x81221cad, "amd_nb_num" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001573sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001583sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001493sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000144Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D94d00001463sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B3A0543431A0670937567D1");
