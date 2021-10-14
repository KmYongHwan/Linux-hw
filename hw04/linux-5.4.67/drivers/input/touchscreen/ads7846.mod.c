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
	{ 0xf4358872, "devm_kfree" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xff76d558, "input_register_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5b88b85d, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeb561ef, "regulator_get" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5ada0011, "input_event" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x85b7373, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1573d6a, "regulator_put" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C78A5971FCCC1DF7E9415AE");
