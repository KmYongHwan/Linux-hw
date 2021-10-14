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
	{ 0xfc002a98, "max8998_write_reg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe709967c, "max8998_read_reg" },
	{ 0xaaec93fa, "max8998_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x72a26440, "max8998_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8998-rtc");
MODULE_ALIAS("platform:lp3974-rtc");

MODULE_INFO(srcversion, "DDF1972AD8B2C1E4A318DD4");
