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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x8fff4a84, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x40aebdcf, "sock_release" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2b22a463, "sock_create_kern" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x83a07b33, "inet6_csk_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x698ac60c, "udp_sock_create6" },
	{ 0x461a82b8, "setup_udp_tunnel_sock" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xbbf07a47, "kernel_connect" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0xd1b30930, "__ip_queue_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa0fd0123, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x75815f13, "udp_set_csum" },
	{ 0xf8ac8b96, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x2fe533a8, "udp_sock_create4" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "30C1B90993BD3EF29F6894D");
