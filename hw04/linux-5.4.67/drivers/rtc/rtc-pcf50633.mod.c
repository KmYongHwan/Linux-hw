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
	{ 0xf58ff891, "pcf50633_register_irq" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x9a4f990a, "pcf50633_read_block" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa29ac532, "pcf50633_write_block" },
	{ 0x3e11d869, "pcf50633_irq_mask_get" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc2a58c7f, "pcf50633_irq_mask" },
	{ 0x618fc890, "pcf50633_irq_unmask" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x2f246964, "pcf50633_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcf50633");


MODULE_INFO(srcversion, "029CD9F0F223E493087E00B");
