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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85b7373, "spi_sync" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6971E7376F7FBDE42B4F582");
