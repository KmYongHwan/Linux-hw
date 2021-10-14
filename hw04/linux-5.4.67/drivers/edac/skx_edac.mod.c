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
	{ 0x3c96fef5, "edac_mc_add_mc_with_groups" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x1038b96f, "adxl_get_component_names" },
	{ 0x95ef1ccc, "dmi_memdev_size" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xc5850110, "printk" },
	{ 0x4d7e9d90, "edac_mc_handle_error" },
	{ 0xc938d3e0, "edac_mc_free" },
	{ 0x98d7f55f, "edac_mc_alloc" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x499bbf57, "nfit_get_smbios_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x791748c8, "adxl_decode" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x2f27d05a, "edac_mc_del_mc" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x5ab09745, "edac_get_owner" },
};

MODULE_INFO(depends, "nfit");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");

MODULE_INFO(srcversion, "A11D0A864A6119ABB3ABD60");
