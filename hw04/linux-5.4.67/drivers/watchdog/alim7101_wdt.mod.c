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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x9415ca79, "__module_get" },
	{ 0x47fda759, "misc_register" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x40d59096, "unregister_restart_handler" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00007101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D774183ACA36BADB1B03FEF");
