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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xc3e8a348, "extcon_set_property_capability" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9c38a97d, "cros_ec_get_host_event" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa052d538, "extcon_sync" },
	{ 0x119dfcbc, "extcon_set_property" },
	{ 0x4c3b0e9e, "extcon_set_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9af4f82, "cros_ec_cmd_xfer_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5F19C62FB7499CE9AC541B");
