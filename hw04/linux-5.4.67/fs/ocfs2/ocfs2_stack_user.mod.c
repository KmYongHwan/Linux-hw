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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x231960, "dlm_posix_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x647d6170, "dlm_lock" },
	{ 0x237f079, "dlm_posix_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x47fda759, "misc_register" },
	{ 0xdefbea52, "default_llseek" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1252a24, "ocfs2_stack_glue_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x46a174ff, "ocfs2_stack_glue_register" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x343cb6a4, "dlm_posix_unlock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x29361773, "complete" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "dlm,ocfs2_stackglue");


MODULE_INFO(srcversion, "F1AE49B698699B3A0A33E51");
