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
	{ 0x752832c, "noop_llseek" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0x66414bc7, "__class_create" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a921311, "strncmp" },
	{ 0xf7fb627c, "parport_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1000e51, "schedule" },
	{ 0x57d2a4f0, "parport_write" },
	{ 0xbe3b8ad7, "parport_set_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x88e96942, "device_create" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fcd855e, "parport_negotiate" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x2a961d8c, "parport_claim_or_block" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "65D223AC29237E9ED531D08");
