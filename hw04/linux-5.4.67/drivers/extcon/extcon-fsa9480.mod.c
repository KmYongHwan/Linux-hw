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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfcs,fsa9480");
MODULE_ALIAS("of:N*T*Cfcs,fsa9480C*");
MODULE_ALIAS("of:N*T*Cfcs,fsa880");
MODULE_ALIAS("of:N*T*Cfcs,fsa880C*");
MODULE_ALIAS("i2c:fsa9480");

MODULE_INFO(srcversion, "A2B49DB899DE498B4EE8904");
