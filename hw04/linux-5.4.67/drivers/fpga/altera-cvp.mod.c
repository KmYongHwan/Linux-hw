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
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0xc5850110, "printk" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6223272a, "fpga_mgr_register" },
	{ 0x9afc59a2, "devm_fpga_mgr_create" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x413f820, "pci_find_next_ext_capability" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x9c581176, "fpga_mgr_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("pci:v00001172d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADF7E1B4B606CB312A936C6");
