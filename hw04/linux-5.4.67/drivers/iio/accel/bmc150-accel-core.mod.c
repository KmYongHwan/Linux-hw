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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xef9dd08a, "iio_read_mount_matrix" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37daa95b, "iio_show_mount_matrix" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x626d3cbd, "iio_buffer_set_attrs" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0x1e253b77, "regmap_raw_read" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "90A52C9659504F232ABBD97");
