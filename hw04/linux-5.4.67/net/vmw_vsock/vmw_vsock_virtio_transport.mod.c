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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x763de475, "virtio_transport_recv_pkt" },
	{ 0xc7aeb95e, "virtio_transport_set_buffer_size" },
	{ 0xf4cb8cdd, "virtio_transport_destruct" },
	{ 0xba883ac4, "virtio_transport_get_max_buffer_size" },
	{ 0xe969568, "virtio_transport_notify_send_pre_block" },
	{ 0xd5952883, "virtio_transport_stream_has_space" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd3242339, "virtio_transport_notify_poll_in" },
	{ 0x775b72de, "virtio_transport_do_socket_init" },
	{ 0x3f567be1, "virtqueue_add_inbuf" },
	{ 0xc2387a4b, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0x31ee7a00, "__vsock_core_init" },
	{ 0x361e44d4, "virtio_transport_deliver_tap_pkt" },
	{ 0xca6eff6f, "virtio_transport_set_min_buffer_size" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x595262eb, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x1e771a1b, "virtio_transport_notify_poll_out" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x1f26612e, "virtqueue_add_sgs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xc5523695, "virtio_transport_stream_dequeue" },
	{ 0x5af926e0, "virtqueue_disable_cb" },
	{ 0xfae74a93, "virtio_transport_stream_enqueue" },
	{ 0x730dce7b, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc8a15fb4, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x3e1f7652, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdf154fe, "virtqueue_get_vring_size" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xff02ff14, "virtio_transport_get_buffer_size" },
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0xb0d228c2, "virtio_transport_dgram_dequeue" },
	{ 0x5f724a8c, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc113f3d1, "virtio_transport_shutdown" },
	{ 0x5ead5c7e, "virtio_transport_dgram_enqueue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb8cf120, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x9ea33dc0, "virtio_transport_free_pkt" },
	{ 0x7c88668, "virtio_transport_dgram_bind" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xb78a800b, "virtio_transport_stream_rcvhiwat" },
	{ 0x7e842d2b, "virtio_transport_set_max_buffer_size" },
	{ 0xc590d073, "virtio_transport_stream_has_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4b9a84e1, "virtio_transport_connect" },
	{ 0x5cdf37d0, "virtqueue_detach_unused_buf" },
	{ 0x3ad90f4d, "vsock_for_each_connected_socket" },
	{ 0x99c91e4d, "virtqueue_enable_cb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xef85abe0, "virtio_transport_release" },
	{ 0x54964f2b, "virtio_transport_get_min_buffer_size" },
	{ 0x72429f1d, "virtio_transport_notify_recv_init" },
	{ 0xd66cd0b1, "register_virtio_driver" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");

MODULE_ALIAS("virtio:d00000013v*");

MODULE_INFO(srcversion, "DE7BDBCC1E6B9E6DBAAB91A");
