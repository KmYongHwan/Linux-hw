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
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9276e8a, "skb_append" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "675A21EB3C3C37B09B98616");
