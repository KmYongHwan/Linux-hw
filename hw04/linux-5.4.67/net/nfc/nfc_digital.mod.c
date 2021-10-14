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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6529cbc, "nfc_register_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf1991a71, "nfc_dep_link_is_up" },
	{ 0x3c50bb37, "nfc_targets_found" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe47d759e, "nfc_tm_activated" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb18156be, "skb_pull" },
	{ 0xa43935de, "nfc_set_remote_general_bytes" },
	{ 0x6e12721e, "nfc_get_local_general_bytes" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca1a8c46, "nfc_alloc_recv_skb" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xff587612, "__pskb_copy_fclone" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7142a794, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xe0f03889, "nfc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x14095fd1, "nfc_unregister_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "nfc,crc-itu-t");


MODULE_INFO(srcversion, "3EA7D75209E9D058B872BF1");
