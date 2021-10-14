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
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x7a06d63e, "regulator_register_notifier" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xd6886e59, "regulator_unregister_notifier" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:sht10");
MODULE_ALIAS("platform:sht11");
MODULE_ALIAS("platform:sht15");
MODULE_ALIAS("platform:sht71");
MODULE_ALIAS("platform:sht75");

MODULE_INFO(srcversion, "FFCE8710E53468CE45C4D28");
