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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:tsc2007");

MODULE_INFO(srcversion, "493E8AA896B9FD6B867E976");
