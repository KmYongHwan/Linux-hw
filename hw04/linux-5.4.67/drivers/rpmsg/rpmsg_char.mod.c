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
	{ 0x245099ba, "unregister_rpmsg_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xc5850110, "printk" },
	{ 0x1f766bb0, "__register_rpmsg_driver" },
	{ 0x66414bc7, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb6f7270a, "device_add" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x40748904, "cdev_init" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x12274995, "rpmsg_trysend" },
	{ 0x15bfb9b7, "rpmsg_send" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb556c400, "rpmsg_poll" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x950af642, "rpmsg_create_ept" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x99b6b2fb, "rpmsg_destroy_ept" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x7ea19302, "put_device" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rpmsg_core");


MODULE_INFO(srcversion, "4F21CE828E24BBD68E99BF2");
