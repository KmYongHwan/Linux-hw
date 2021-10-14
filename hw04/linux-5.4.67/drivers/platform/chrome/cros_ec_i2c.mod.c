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
	{ 0x37a0cba, "kfree" },
	{ 0xa45e53e7, "cros_ec_check_result" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a9b2aea, "cros_ec_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x6a793890, "cros_ec_prepare_tx" },
	{ 0xe2a8f14b, "cros_ec_unregister" },
	{ 0xd917f6c6, "cros_ec_suspend" },
	{ 0x5dc9b186, "cros_ec_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("acpi*:GOOG0008:*");
MODULE_ALIAS("i2c:cros-ec-i2c");

MODULE_INFO(srcversion, "B0A05B779CF58372AA7E5C5");
