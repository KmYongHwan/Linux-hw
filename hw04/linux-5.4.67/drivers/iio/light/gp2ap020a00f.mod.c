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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:gp2ap020a00f");

MODULE_INFO(srcversion, "DB77A13FF3A3B4A74754D5F");
