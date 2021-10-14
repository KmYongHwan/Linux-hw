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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x3a943114, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x30cbccf3, "sock_no_recvmsg" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xe3cba01d, "iov_iter_get_pages" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x8c7f745, "sock_wake_async" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa9fb365, "sock_kfree_s" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf720a60b, "module_put" },
	{ 0x399bb8c0, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9699df20, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xdc820989, "sock_no_sendmsg" },
	{ 0x566492d6, "sock_kzfree_s" },
	{ 0xf5524491, "iov_iter_advance" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3fa55769, "__put_page" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3E82012C8CBAA95B21A937");
