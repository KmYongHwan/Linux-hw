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
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x3c96fef5, "edac_mc_add_mc_with_groups" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x98d7f55f, "edac_mc_alloc" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4d7e9d90, "edac_mc_handle_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xc938d3e0, "edac_mc_free" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x2f27d05a, "edac_mc_del_mc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000065F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55AF0929C103DE55742909E");
