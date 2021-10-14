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
	{ 0x2d3385d3, "system_wq" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56837fb, "vmci_get_context_id" },
	{ 0xe11895c1, "vmci_event_unsubscribe" },
	{ 0x72f59d11, "__vsock_create" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8ea2f573, "vmci_qpair_enquev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe60fa714, "vsock_add_pending" },
	{ 0x9142de53, "vmci_qpair_dequev" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x612df9ae, "vmci_qpair_detach" },
	{ 0x31ee7a00, "__vsock_core_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5d9043d7, "vsock_stream_has_space" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x458d93b9, "vsock_find_connected_socket" },
	{ 0xe0cc9c92, "vmci_qpair_alloc" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xbf7ecf58, "vsock_stream_has_data" },
	{ 0xc5850110, "printk" },
	{ 0x46dd187, "vmci_datagram_create_handle" },
	{ 0xc403cafe, "vmci_is_context_owner" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xeeebfd72, "vmci_qpair_peekv" },
	{ 0x676bd843, "vmci_qpair_consume_free_space" },
	{ 0x2663cb64, "vsock_addr_equals_addr" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xc04c7e84, "vmci_qpair_get_consume_indexes" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbd0f699d, "vsock_addr_bound" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x85c587c2, "vsock_remove_pending" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x24d14bc, "vmci_qpair_produce_free_space" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xdca84968, "vsock_find_bound_socket" },
	{ 0xa30ee45a, "vsock_remove_connected" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea143610, "vmci_datagram_send" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2449459d, "vmci_event_subscribe" },
	{ 0x37a0cba, "kfree" },
	{ 0xea61eefe, "vmci_qpair_produce_buf_ready" },
	{ 0x69acdf38, "memcpy" },
	{ 0x40b8cfdf, "vsock_remove_sock" },
	{ 0x3a22fa8a, "vmci_datagram_destroy_handle" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ad90f4d, "vsock_for_each_connected_socket" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7c74d7a6, "vmci_qpair_consume_buf_ready" },
	{ 0x1fd4782d, "vmci_qpair_get_produce_indexes" },
	{ 0xef9972e, "vsock_insert_connected" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5591b58e, "vmci_context_get_priv_flags" },
	{ 0xde3abc2e, "vmci_datagram_create_handle_priv" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0xf254fb36, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vmw_vmci,vsock");


MODULE_INFO(srcversion, "3B43FE3D2856AA9E4C37B5F");
