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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xa5558b7d, "proc_create" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xc5850110, "printk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x267df662, "smp_call_on_cpu" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*DellComputer*:pn*Inspiron*:");
MODULE_ALIAS("dmi*:svn*DellComputer*:pn*Latitude*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*LatitudeD520*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Latitude*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MM061*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MP061*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*PrecisionWorkStation490*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Precision*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Vostro*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPSL421X*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Studio*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS13*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MXC051*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS159560*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS159570*:");

MODULE_INFO(srcversion, "FFB5B65E164BBA284B34F10");
