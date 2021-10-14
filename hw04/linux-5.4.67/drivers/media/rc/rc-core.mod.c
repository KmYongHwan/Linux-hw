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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40748904, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x4cd2cb52, "led_trigger_event" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x548bc933, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb6f7270a, "device_add" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa0fd0123, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf720a60b, "module_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x523c78db, "cdev_device_add" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5680b13c, "devres_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf224939a, "led_trigger_unregister_simple" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd0ef71ad, "kobject_get_path" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x198ef25b, "led_trigger_register_simple" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x69c3d482, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66414bc7, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8015C1E2EF73CCF144B675F");
