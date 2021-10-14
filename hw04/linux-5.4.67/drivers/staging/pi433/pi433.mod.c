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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2bdb9d00, "cdev_alloc" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x40748904, "cdev_init" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfeebc7c4, "__kfifo_from_user_r" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x88e96942, "device_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x85b7373, "spi_sync" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xeb30fee3, "gpiod_unexport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x66414bc7, "__class_create" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x33fcf44a, "__kfifo_out_r" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3842744, "gpiod_get" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*CSmarthome-Wolf,pi433");
MODULE_ALIAS("of:N*T*CSmarthome-Wolf,pi433C*");

MODULE_INFO(srcversion, "0C9CD1B9AA56A6AF210683F");
