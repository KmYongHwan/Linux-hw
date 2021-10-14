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
	{ 0x4629334c, "__preempt_count" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5ada0011, "input_event" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9d19883e, "led_classdev_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc7ed4c04, "led_classdev_resume" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm8323");

MODULE_INFO(srcversion, "5A0CE0EDD077E72A4DA6FC3");
