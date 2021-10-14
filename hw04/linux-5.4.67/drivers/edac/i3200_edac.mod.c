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
	{ 0xcb077337, "pci_dev_put" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x4d7e9d90, "edac_mc_handle_error" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x3c96fef5, "edac_mc_add_mc_with_groups" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x98d7f55f, "edac_mc_alloc" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc938d3e0, "edac_mc_free" },
	{ 0xedc03953, "iounmap" },
	{ 0x2f27d05a, "edac_mc_del_mc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000029F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F76A583A72D5BB33974F4AC");
