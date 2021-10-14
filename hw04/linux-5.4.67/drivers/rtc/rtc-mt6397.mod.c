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
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6397-rtc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397-rtcC*");

MODULE_INFO(srcversion, "657D3C805A667892FB44F5C");
