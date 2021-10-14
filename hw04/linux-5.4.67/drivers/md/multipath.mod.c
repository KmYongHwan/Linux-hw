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
	{ 0x38e46431, "mempool_exit" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdcbb617, "bio_devname" },
	{ 0x60c84984, "md_check_recovery" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x89688e79, "unregister_md_personality" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe6a028ca, "md_register_thread" },
	{ 0xc86debf7, "bio_init" },
	{ 0xe7e88b18, "md_flush_request" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc7bca1d6, "disk_stack_limits" },
	{ 0x6168380e, "seq_putc" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5333f3ee, "md_integrity_add_rdev" },
	{ 0x2d715234, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd13d5b86, "md_set_array_sectors" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x9266d7ef, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xbc6deff7, "__bio_clone_fast" },
	{ 0x97d1d7e6, "md_error" },
	{ 0x4f10df48, "md_check_no_bitmap" },
	{ 0x9b8fc947, "md_integrity_register" },
	{ 0xc3d39829, "register_md_personality" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24082A9E4533F660D1EDE85");
