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
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x40748904, "cdev_init" },
	{ 0xf89bb7da, "iov_iter_npages" },
	{ 0xb0c22846, "__skb_gso_segment" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa7e38f12, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xccd77df3, "__skb_flow_dissect" },
	{ 0xc304e1fb, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc87563d6, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x74573c74, "skb_partial_csum_set" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc634ca7, "kfree_skb_list" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x40393bfd, "dev_set_mac_address" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x46612729, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe4b30419, "build_skb" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xf5524491, "iov_iter_advance" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x15314fce, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xeea86faf, "zerocopy_sg_from_iter" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7D231ADCC4540DF0A58F0EB");
