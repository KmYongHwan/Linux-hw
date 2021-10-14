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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x4101f73, "gnss_put_device" },
	{ 0x414f1f8f, "gnss_register_device" },
	{ 0xfb916bca, "serdev_device_close" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x2ef8c6f3, "gnss_deregister_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe4d45818, "gnss_allocate_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1113c204, "__serdev_device_driver_register" },
	{ 0x2f9dd375, "serdev_device_wait_until_sent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9f01c0c9, "serdev_device_write" },
	{ 0xc4ed2a93, "serdev_device_write_wakeup" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ef161f8, "serdev_device_open" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x8d205528, "serdev_device_set_flow_control" },
	{ 0xf1869a00, "gnss_insert_raw" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf1ab585, "serdev_device_set_baudrate" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "gnss");


MODULE_INFO(srcversion, "D84AEA9C10C9C42CD3397E9");
