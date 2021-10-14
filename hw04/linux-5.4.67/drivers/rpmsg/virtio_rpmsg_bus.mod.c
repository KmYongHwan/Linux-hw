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
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0xc5850110, "printk" },
	{ 0xd66cd0b1, "register_virtio_driver" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc37c57ed, "rpmsg_sendto" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xcbd1c59, "virtqueue_notify" },
	{ 0x406b5921, "virtqueue_kick_prepare" },
	{ 0x1a015d7a, "virtio_check_driver_offered_feature" },
	{ 0x3f567be1, "virtqueue_add_inbuf" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xdf154fe, "virtqueue_get_vring_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xba0a97d3, "rpmsg_register_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7ea19302, "put_device" },
	{ 0x92435b13, "rpmsg_find_device" },
	{ 0xc0c5c939, "rpmsg_unregister_device" },
	{ 0x9166fada, "strncpy" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0xbdfe9390, "virtqueue_add_outbuf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5af926e0, "virtqueue_disable_cb" },
	{ 0x99c91e4d, "virtqueue_enable_cb" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rpmsg_core");

MODULE_ALIAS("virtio:d00000007v*");

MODULE_INFO(srcversion, "463736CA78801718C805D6F");
