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
	{ 0x752832c, "noop_llseek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0x47fda759, "misc_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x3c65820c, "tpm_transmit_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0xa0fd0123, "fput" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x5c8b5637, "fd_install" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3fe3a7b0, "anon_inode_getfile" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x66558fd0, "tpm_chip_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfb578fc5, "memset" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x11858bc4, "tpm_chip_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea19302, "put_device" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xb37c09f0, "tpm_chip_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BFE124149D78B7712AAA92F");
