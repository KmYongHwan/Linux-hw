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
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9f379e05, "tps6586x_set_bits" },
	{ 0x6e7e4e93, "tps6586x_clr_bits" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf9714d9, "tps6586x_writes" },
	{ 0xbdd21a75, "tps6586x_reads" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xc51b3c99, "tps6586x_update" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BB7F2551FCF49B0A210117");
