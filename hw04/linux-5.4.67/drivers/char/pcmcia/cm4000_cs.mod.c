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
	{ 0xc373a5d1, "no_llseek" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x66414bc7, "__class_create" },
	{ 0x88e96942, "device_create" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0xba312d7b, "current_task" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe4f5a219, "stream_open" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0223c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2FB368CApbA2BD8C39pc*pd*");

MODULE_INFO(srcversion, "4D5BC9AA9BAD757F1B770A7");
