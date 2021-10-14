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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x363cbaa5, "nfc_hci_disconnect_gate" },
	{ 0x76b54de2, "nfc_hci_disconnect_all_gates" },
	{ 0xff77dbde, "nfc_hci_send_event" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf1991a71, "nfc_dep_link_is_up" },
	{ 0xf2f08c0e, "nfc_hci_set_param" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa2721f42, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xacd356c7, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xac058c7b, "nfc_hci_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe47d759e, "nfc_tm_activated" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xcbbde9e0, "nfc_hci_get_clientdata" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x970ac2e9, "nfc_hci_send_cmd" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa43935de, "nfc_set_remote_general_bytes" },
	{ 0x8439dfcf, "nfc_hci_register_device" },
	{ 0x6e12721e, "nfc_get_local_general_bytes" },
	{ 0x90d0df6b, "nfc_se_transaction" },
	{ 0xa53106d2, "nfc_hci_free_device" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1be59bdf, "nfc_llc_start" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4d5f884, "nfc_hci_unregister_device" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x90a3b2e9, "nfc_remove_se" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7142a794, "nfc_tm_data_received" },
	{ 0x75aab88f, "nfc_hci_connect_gate" },
	{ 0x4eb6887b, "nfc_llc_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x66dd4cbf, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x9b9e0769, "nfc_hci_send_cmd_async" },
	{ 0xb76dd33f, "nfc_hci_get_param" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3cacad8c, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8d6e9e4d, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "88961D52A381390EE52BE7A");
