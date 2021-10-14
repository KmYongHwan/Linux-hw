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
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x40748904, "cdev_init" },
	{ 0x20a4e2d6, "most_stop_channel" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf90da5d8, "most_deregister_configfs_subsys" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x19d97174, "most_register_component" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x66ca6520, "most_put_mbo" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2058171f, "channel_has_mbo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd21fb248, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88e96942, "device_create" },
	{ 0x36f40045, "most_submit_mbo" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb95d0969, "most_get_mbo" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f7a9585, "most_start_channel" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66414bc7, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x15d515df, "most_register_configfs_subsys" },
};

MODULE_INFO(depends, "most_core");


MODULE_INFO(srcversion, "120C6F675E823CBBD012A12");
