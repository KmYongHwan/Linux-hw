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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2f27d05a, "edac_mc_del_mc" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xc938d3e0, "edac_mc_free" },
	{ 0x3c96fef5, "edac_mc_add_mc_with_groups" },
	{ 0x98d7f55f, "edac_mc_alloc" },
	{ 0xfbfe990b, "pci_find_bus" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0x4d7e9d90, "edac_mc_handle_error" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3ad73ce6, "pci_bus_write_config_byte" },
	{ 0xbf51fdd3, "pci_bus_read_config_dword" },
	{ 0xd2b9925c, "pci_bus_write_config_word" },
	{ 0xb06b3dae, "pci_bus_write_config_dword" },
	{ 0x995a9e4, "pci_bus_read_config_word" },
	{ 0xd779c2f7, "pci_bus_read_config_byte" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");

MODULE_INFO(srcversion, "E1BB7837EB19C8E773E2040");
