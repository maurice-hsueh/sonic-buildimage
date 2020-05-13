#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe0272bd9, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe09d7d99, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d17af2f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3c145e04, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaaa00383, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x4384aea9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdb098cab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1b46cb2f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1ad2c59e, __VMLINUX_SYMBOL_STR(pegatron_fm_6256_bn_f_cpld_read) },
	{ 0x7100ec80, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5d081a34, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf18ed0dc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc9011ab9, __VMLINUX_SYMBOL_STR(pegatron_fm_6256_bn_f_cpld_write) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7ca8951, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x8553d373, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa75077b8, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9a0e186c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x3b36e70c, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pegatron_fm_6256_bn_f_cpld";

MODULE_ALIAS("i2c:fm_6256_bn_f_sfpA");
MODULE_ALIAS("i2c:fm_6256_bn_f_sfpB");
MODULE_ALIAS("i2c:fm_6256_bn_f_sfpC");
