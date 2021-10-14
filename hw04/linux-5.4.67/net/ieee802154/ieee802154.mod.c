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
	{ 0x4de8d7ee, "class_find_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe737d8d6, "get_net_ns_by_fd" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x369b37c0, "dev_change_net_namespace" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0x349cc11, "device_match_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x386c179d, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5df081, "__put_net" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x40393bfd, "dev_set_mac_address" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x548bc933, "class_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xb6f7270a, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9c0c1705, "class_for_each_device" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf40da1eb, "genl_family_attrbuf" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xd305f2c3, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x2d2c91b, "trace_output_call" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10F8468F340C701824AF3A3");
